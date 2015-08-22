/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol MNAvatarImageDecorating;
@class MNThreadCellResources, MNProfileImageViewController, MNSeenHeadListViewController, MNTincanThreadIndicator, FBMLocalThreadKey, NSString;

@interface MNThreadCellController : NSObject <FBClassProvidable> {

	MNThreadCellResources* _threadCellResources;
	MNProfileImageViewController* _profileImageViewController;
	MNSeenHeadListViewController* _seenHeadListViewController;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNTincanThreadIndicator* _tincanThreadIndicator;
	BOOL _hasTincanMode;
	FBMLocalThreadKey* _localThreadKeyOfSelectedThread;

}

@property (nonatomic,copy) FBMLocalThreadKey * localThreadKeyOfSelectedThread;              //@synthesize localThreadKeyOfSelectedThread=_localThreadKeyOfSelectedThread - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithProfileImageViewController:(id)arg1 seenHeadListViewController:(id)arg2 avatarImageDecoration:(id)arg3 tincanThreadIndicator:(id)arg4 ;
-(void)_updateThreadCellStatusIndicator:(id)arg1 mute:(BOOL)arg2 ;
-(void)setUpThreadCell:(id)arg1 withThreadRow:(id)arg2 ;
-(void)threadCellWillAppear:(id)arg1 ;
-(void)threadCellDidDisappear:(id)arg1 ;
-(void)muteThreadCell:(id)arg1 ;
-(void)unmuteThreadCell:(id)arg1 ;
-(void)markThreadCellUnread:(id)arg1 ;
-(void)markThreadCellRead:(id)arg1 ;
-(FBMLocalThreadKey *)localThreadKeyOfSelectedThread;
-(void)setLocalThreadKeyOfSelectedThread:(FBMLocalThreadKey *)arg1 ;
@end
