/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBComponentTableViewDataSourceEventListener.h>

@class NSString;

@interface FBComponentTableViewDataSourceEventListenerAnnouncer : FBAnnouncerBase <FBComponentTableViewDataSourceEventListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dataSource:(id)arg1 willEnqueueChangeset:(Changeset*)arg2 ;
-(void)dataSource:(id)arg1 didEnqueueChangeset:(Changeset*)arg2 ;
-(void)dataSourceWillBeginUpdates:(id)arg1 ;
-(void)dataSourceWillEndUpdates:(id)arg1 changeset:(Changeset*)arg2 ;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 ;
-(void)dataSourceWillReloadRowHeights:(id)arg1 ;
-(void)dataSourceDidReloadRowHeights:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
