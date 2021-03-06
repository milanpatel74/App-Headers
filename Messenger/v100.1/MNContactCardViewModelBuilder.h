/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMSyncedThreadKey, NSString, NSArray;

@interface MNContactCardViewModelBuilder : NSObject {

	FBMSyncedThreadKey* _threadKey;
	NSString* _fullName;
	NSString* _mutualFriendsContext;
	NSArray* _timelineContextStrings;
	NSString* _profilePicHash;
	BOOL _addContactButtonEnabled;

}
+(id)contactCardViewModelFromExistingContactCardViewModel:(id)arg1 ;
+(id)contactCardViewModel;
-(id)withFullName:(id)arg1 ;
-(id)withAddContactButtonEnabled:(BOOL)arg1 ;
-(id)withThreadKey:(id)arg1 ;
-(id)withMutualFriendsContext:(id)arg1 ;
-(id)withTimelineContextStrings:(id)arg1 ;
-(id)withProfilePicHash:(id)arg1 ;
-(id)build;
@end

