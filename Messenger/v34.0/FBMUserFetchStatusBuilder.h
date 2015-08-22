/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface FBMUserFetchStatusBuilder : NSObject {

	BOOL _hasFetchedUserId;
	BOOL _hasFetchedIdentityType;
	BOOL _hasFetchedName;
	BOOL _hasFetchedPhoneticName;
	BOOL _hasFetchedNickname;
	BOOL _hasFetchedHasMessenger;
	BOOL _hasFetchedCanInstallMessenger;
	BOOL _hasFetchedImageUrls;
	BOOL _hasFetchedCommunicationRank;
	BOOL _hasFetchedIsMemorialized;
	BOOL _hasFetchedIsPartial;
	BOOL _hasFetchedBlockedByViewerStatus;

}
+(id)userFetchStatus;
+(id)userFetchStatusFromExistingUserFetchStatus:(id)arg1 ;
-(id)withHasFetchedUserId:(BOOL)arg1 ;
-(id)withHasFetchedIdentityType:(BOOL)arg1 ;
-(id)withHasFetchedName:(BOOL)arg1 ;
-(id)withHasFetchedPhoneticName:(BOOL)arg1 ;
-(id)withHasFetchedNickname:(BOOL)arg1 ;
-(id)withHasFetchedHasMessenger:(BOOL)arg1 ;
-(id)withHasFetchedCanInstallMessenger:(BOOL)arg1 ;
-(id)withHasFetchedImageUrls:(BOOL)arg1 ;
-(id)withHasFetchedCommunicationRank:(BOOL)arg1 ;
-(id)withHasFetchedIsMemorialized:(BOOL)arg1 ;
-(id)withHasFetchedIsPartial:(BOOL)arg1 ;
-(id)withHasFetchedBlockedByViewerStatus:(BOOL)arg1 ;
-(id)build;
@end
