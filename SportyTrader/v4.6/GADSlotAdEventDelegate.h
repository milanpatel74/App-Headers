/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol GADSlotAdEventDelegate <NSObject>
@optional
-(void)slotWillPresentScreen:(id)arg1;
-(void)slotWillDismissScreen:(id)arg1;
-(void)slotDidDismissScreen:(id)arg1;
-(void)slotWillLeaveApplication:(id)arg1;

@required
-(void)slotFinishedLoadingAdContent:(id)arg1;
-(void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2;

@end
