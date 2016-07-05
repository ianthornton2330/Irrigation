Start Watering Every 24 Hours {
    Turn Pump On and Open Valve 1 for 1 Hour &log ()
        Close Valve 1 and Open Valve 2 for 1 Hour &log ()
            Close Valve 2 and Open Valve 3 for 1 Hour &log ()
                Close Valve 3 and Open Valve 4 for 10 Minutes &log ()
                    Close Valve 4 and Turn Off Pump &log ()
                    Wait 23 Hours 50 Minutes &log ()
                    }

/* 2 types of statements:
 1: Do X Every Y Mins
 2: Do X For Y Mins */

/* Line 1 would be Type 1, Lines 2-7 would be Type 2 */

/* Eventual goals:
    GPRS connectivity - via Arduino GPRS Shield or using an Electron (preferably, because of the IDE/platform/and the pre-existing app)
    Integrated Hygrometers to measure watering (prevention over/underwatering)
    Water Metering - and logging how much water is being used per valve (not sure if there's an arduino compatible meter)
    IFTTT notifications of overages on water usages/anything outside suitable hygrometer ranges/etc.
*/