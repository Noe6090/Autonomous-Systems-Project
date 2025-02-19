
type {
    Pose
    Float
    Color
    PointDetect
}

skillset isae_robot {

    data pose: Pose
	
    resource {
        motion_status {
            state { Idle Busy }
            initial Idle
            transition all
        }
        battery_status {
            state { BatteryOk BatteryLow }
            initial BatteryOk
            transition {
                BatteryOk -> BatteryLow
                BatteryLow -> BatteryOk
            }
        }
    }

    event {
        estop{
            effect motion_status -> Idle
        }
        battery_to_low {
            guard battery_status == BatteryOk
            effect battery_status -> BatteryLow
        }
        battery_to_ok {
            guard battery_status == BatteryLow
            effect battery_status -> BatteryOk
        }
        	
    }

    skill detect_target {
        input {
            timeout: Float
        }
        output {
            target: Color
        }
        interrupt { interrupting false }
        success target_found {}
        failure no_target {}
    }

    skill move_to {
        input {
            target: Pose
        }
        precondition {
            is_idle: motion_status == Idle
            is_battery_high: battery_status == BatteryOk     
        }
        start motion_status -> Busy

        invariant {
            is_busy {
                guard motion_status == Busy
            }
            
            is_battery_high {
            	guard battery_status == BatteryOk
            	effect motion_status -> Idle
            }
        }

        progress {
            period 1.0
            output distance: Float
        }
        interrupt {
            interrupting true
            effect motion_status -> Idle
        }
        success reached {
            effect motion_status -> Idle
        }
        failure couldnot_reach {
            effect motion_status -> Idle
        }
    }

    skill take_picture {
    	input {
           object_name: Color
           }
       
        success image_saved {}
        failure error_saving {}
        }
        
    skill track_target {
    	input {
            timeout: Float
    	}  
        precondition {
            is_idle: motion_status == Idle
            is_battery_high: battery_status == BatteryOk     
        }
        start motion_status -> Busy

        invariant {
            is_busy {
                guard motion_status == Busy
            }
            
            is_battery_high {
            	guard battery_status == BatteryOk
            	effect motion_status -> Idle
            }
        }     
        progress {
            period 1.0
            output detection: Pose
        }        
        interrupt {
            interrupting true
            effect motion_status -> Idle
        }      
        failure error_tracking {
            effect motion_status -> Idle
        }
        
    }
}


