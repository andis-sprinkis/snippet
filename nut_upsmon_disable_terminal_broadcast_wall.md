# Disable terminal broadcast `wall` messages in _Network UPS Tools (NUT)_

In `/etc/nut/upsmon.conf` add or change the `NOTIFYFLAG` lines - remove `WALL` from the types of notifications that shouldn't be sent out as global terminal messages for all users:

```
NOTIFYFLAG ONLINE	SYSLOG
NOTIFYFLAG ONBATT	SYSLOG
NOTIFYFLAG LOWBATT	SYSLOG+WALL
NOTIFYFLAG FSD	SYSLOG+WALL
NOTIFYFLAG COMMOK	SYSLOG
NOTIFYFLAG COMMBAD	SYSLOG
NOTIFYFLAG SHUTDOWN	SYSLOG+WALL
NOTIFYFLAG REPLBATT	SYSLOG+WALL
NOTIFYFLAG NOCOMM	SYSLOG
NOTIFYFLAG NOPARENT	SYSLOG+WALL
NOTIFYFLAG CAL	SYSLOG
NOTIFYFLAG NOTCAL	SYSLOG
NOTIFYFLAG OFF	SYSLOG
NOTIFYFLAG NOTOFF	SYSLOG
NOTIFYFLAG BYPASS	SYSLOG
NOTIFYFLAG NOTBYPASS	SYSLOG
NOTIFYFLAG ECO	SYSLOG
NOTIFYFLAG NOTECO	SYSLOG
NOTIFYFLAG ALARM	SYSLOG+WALL
NOTIFYFLAG NOTALARM	SYSLOG
NOTIFYFLAG OTHER	SYSLOG
NOTIFYFLAG NOTOTHER	SYSLOG
NOTIFYFLAG SUSPEND_STARTING	SYSLOG
NOTIFYFLAG SUSPEND_FINISHED	SYSLOG
```

```sh
systemctl restart nut-server.service nut-logger.service
```

## Glossary

From the default `upsmon.conf`:

```conf
# SYSLOG - Write the message in the syslog
# WALL   - Write the message to all users on the system
# EXEC   - Execute NOTIFYCMD with the message
# IGNORE - Don't do anything
```

```conf
# NOTIFYFLAG ONLINE	SYSLOG+WALL
# NOTIFYFLAG ONBATT	SYSLOG+WALL
# NOTIFYFLAG LOWBATT	SYSLOG+WALL
# NOTIFYFLAG FSD	SYSLOG+WALL
# NOTIFYFLAG COMMOK	SYSLOG+WALL
# NOTIFYFLAG COMMBAD	SYSLOG+WALL
# NOTIFYFLAG SHUTDOWN	SYSLOG+WALL
# NOTIFYFLAG REPLBATT	SYSLOG+WALL
# NOTIFYFLAG NOCOMM	SYSLOG+WALL
# NOTIFYFLAG NOPARENT	SYSLOG+WALL
# NOTIFYFLAG CAL	SYSLOG+WALL
# NOTIFYFLAG NOTCAL	SYSLOG+WALL
# NOTIFYFLAG OFF	SYSLOG+WALL
# NOTIFYFLAG NOTOFF	SYSLOG+WALL
# NOTIFYFLAG BYPASS	SYSLOG+WALL
# NOTIFYFLAG NOTBYPASS	SYSLOG+WALL
# NOTIFYFLAG ECO	SYSLOG+WALL
# NOTIFYFLAG NOTECO	SYSLOG+WALL
# NOTIFYFLAG ALARM	SYSLOG+WALL
# NOTIFYFLAG NOTALARM	SYSLOG+WALL
#
# NOTIFYFLAG OTHER	SYSLOG+WALL
# NOTIFYFLAG NOTOTHER	SYSLOG+WALL
#
# NOTIFYFLAG SUSPEND_STARTING	SYSLOG+WALL
# NOTIFYFLAG SUSPEND_FINISHED	SYSLOG+WALL
```

```conf
# NOTIFYMSG <notify type> "message"
#
# NOTIFYMSG ONLINE	"UPS %s on line power"
# NOTIFYMSG ONBATT	"UPS %s on battery"
# NOTIFYMSG LOWBATT	"UPS %s battery is low"
# NOTIFYMSG FSD		"UPS %s: forced shutdown in progress"
# NOTIFYMSG COMMOK	"Communications with UPS %s established"
# NOTIFYMSG COMMBAD	"Communications with UPS %s lost"
# NOTIFYMSG SHUTDOWN	"Auto logout and shutdown proceeding"
# NOTIFYMSG REPLBATT	"UPS %s battery needs to be replaced"
# NOTIFYMSG NOCOMM	"UPS %s is unavailable"
# NOTIFYMSG NOPARENT	"upsmon parent process died - shutdown impossible"
# NOTIFYMSG CAL		"UPS %s: calibration in progress"
# NOTIFYMSG NOTCAL	"UPS %s: calibration finished"
# NOTIFYMSG OFF		"UPS %s: administratively OFF or asleep"
# NOTIFYMSG NOTOFF	"UPS %s: no longer administratively OFF or asleep"
# NOTIFYMSG BYPASS	"UPS %s: on bypass (powered, not protecting)"
# NOTIFYMSG NOTBYPASS	"UPS %s: no longer on bypass"
# NOTIFYMSG ECO		"UPS %s: in ECO mode (as defined by vendor)"
# NOTIFYMSG NOTECO	"UPS %s: no longer in ECO mode (as defined by vendor)"
#
# NOTIFYMSG ALARM	"UPS %s: one or more active alarms: [%s]"
# or NOTIFYMSG ALARM	"UPS %s: one or more active alarms (check ups.alarm)"
# NOTIFYMSG NOTALARM	"UPS %s is no longer in an alarm state (no active alarms)"
#
# NOTIFYMSG OVER	"UPS %s: overloaded"
# NOTIFYMSG NOTOVER	"UPS %s: no longer overloaded"
# NOTIFYMSG TRIM	"UPS %s: trimming incoming voltage"
# NOTIFYMSG NOTTRIM	"UPS %s: no longer trimming incoming voltage"
# NOTIFYMSG BOOST	"UPS %s: boosting incoming voltage"
# NOTIFYMSG NOTBOOST	"UPS %s: no longer boosting incoming voltage"

# NOTIFYMSG OTHER	"UPS %s: has at least one unclassified status token: [%s]"
# NOTIFYMSG NOTOTHER	"UPS %s has no unclassified status tokens anymore"

# NOTIFYMSG SUSPEND_STARTING	"OS is entering sleep/suspend/hibernate mode"
# NOTIFYMSG SUSPEND_FINISHED	"OS just finished sleep/suspend/hibernate mode, de-activating obsolete UPS readings to avoid an unfortunate shutdown"
```
