#! /bin/tcsh

set currh = `date +%H`
set currusr = `ypcat passwd | grep $USER | cut -d: -f5`
set currusg = `/opt/freeware/bin/du -sm | cut -f1`

if ($currh <= 6) then
	echo "Du solltest schlafen, $currusr, es ist $currh Uhr"
else if ($currh <= 11) then
	echo "Es ist viel zu frueh, $currusr : $currh Uhr"
else if ($currh <= 18) then
	echo "Moinmoin $currusr, es ist $currh Uhr"
else if ($currh <= 23) then
	echo "Nabend $currusr, es ist $currh Uhr"
endif

if ($currusg >= 200) then
	echo "Dein Homeverzeichnis belegt [0;31m$currusg[0m MB"
else 
	echo "Dein Homeverzeichnis belegt [0;32m$currusg[0m MB"