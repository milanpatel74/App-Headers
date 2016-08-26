/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDelegate.h>

@protocol MNSyncPersonsDialogListDelegateListener;
@class NSArray, NSString;

@interface MNSyncPersonsDialogListDelegate : NSObject <UITableViewDelegate> {

	NSArray* _syncPersons;
	id<MNSyncPersonsDialogListDelegateListener> _listener;

}

@property (assign,nonatomic,__weak) id<MNSyncPersonsDialogListDelegateListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSArray * syncPersons;                                                    //@synthesize syncPersons=_syncPersons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)syncPersons;
-(void)setSyncPersons:(NSArray *)arg1 ;
-(id)initWithListener:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<MNSyncPersonsDialogListDelegateListener>)listener;
-(void)setListener:(id<MNSyncPersonsDialogListDelegateListener>)arg1 ;
@end
