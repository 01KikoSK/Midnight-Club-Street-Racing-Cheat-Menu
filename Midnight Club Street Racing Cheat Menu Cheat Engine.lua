-- Script name: Midnight Club Street Racing Cheats

-- Define the cheats
local cheats = {
    { name = "Infinite Nitro", address = " NitroAddress", value = "100" },
    { name = "Unlimited Money", address = "MoneyAddress", value = "999999" },
    -- Add more cheats here
  }
  
  -- Function to toggle cheats
  local function toggleCheats(cheat)
    if cheat.enabled then
      cheat.enabled = false
    else
      cheat.enabled = true
    end
  end
  
  -- Create the cheat menu
  local cheatMenu = {
    { name = "Cheats", type = "submenu" },
    { name = "Infinite Nitro", type = "checkbox", action = function() toggleCheats(cheats[1]) end },
    { name = "Unlimited Money", type = "checkbox", action = function() toggleCheats(cheats[2]) end },
    -- Add more cheats to the menu here
  }
  
  -- Register the cheat menu
  registerMenu(cheatMenu)