/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNotificationsSyncManagerListener.h>

@class FBUserSession, FBMemPhotoCache, NSMutableDictionary, FBImagePrefetchController, NSString;

@interface FBNotificationPhotoPrefetcher : NSObject <FBNotificationsSyncManagerListener> {

	FBUserSession* _session;
	FBMemPhotoCache* _photoCache;
	NSMutableDictionary* _notificationsToPrefetchOnForegrounding;
	FBImagePrefetchController* _imagePrefetchController;

}

@property (nonatomic,retain) FBImagePrefetchController * imagePrefetchController;              //@synthesize imagePrefetchController=_imagePrefetchController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)notificationsSyncManager:(id)arg1 didFinishLoading:(unsigned long long)arg2 withLoadDataReason:(long long)arg3 changeset:(id)arg4 ;
-(void)notificationsSyncManagerFinishedInitializing:(id)arg1 ;
-(FBImagePrefetchController *)imagePrefetchController;
-(void)_applicationFinishedEnteringForegroundAndIsNowIdle:(id)arg1 ;
-(void)_storeMemNotificationsToPrefetchWhenForegrounding:(id)arg1 ;
-(void)_prefetchPhotos:(id)arg1 ;
-(void)_addPhotosToCache:(id)arg1 ;
-(void)_prefetchPhotosForAddedNotifications:(id)arg1 ;
-(void)_prefetchPhotosForMemNotifications:(id)arg1 ;
-(id)_photoNotificationsFromNotifications:(id)arg1 ;
-(void)_prefetchPhotoViewFlagForPhoto:(id)arg1 ;
-(id)initWithSession:(id)arg1 notificationsSyncManager:(id)arg2 ;
-(void)setImagePrefetchController:(FBImagePrefetchController *)arg1 ;
-(void)dealloc;
@end
