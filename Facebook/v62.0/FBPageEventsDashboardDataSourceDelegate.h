/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPageEventsDashboardDataSourceDelegate <NSObject>
@required
-(void)createEventTapped:(id)arg1;
-(void)eventsDidFailToLoadWithSection:(unsigned long long)arg1;
-(void)eventsDidUpdateWithSection:(unsigned long long)arg1 freshDownload:(BOOL)arg2;
-(void)shouldScrollToIndexPath:(id)arg1;
-(void)didTapEditOnEvent:(id)arg1;
-(void)didTapInviteOnEvent:(id)arg1;
-(void)didTapPromoteOnEvent:(id)arg1;

@end
