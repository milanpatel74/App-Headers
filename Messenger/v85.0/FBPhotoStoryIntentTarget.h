/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBIntentTarget.h>

@protocol FBPhotoStoryContainer, FBGraphQLConnectionSyncStoreProtocol;
@class FBMemPhoto, FBPhotosConsumptionReferrer, FBScenePath;

@interface FBPhotoStoryIntentTarget : FBIntentTarget {

	id<FBPhotoStoryContainer> _photoStoryContainer;
	FBMemPhoto* _openingPhoto;
	id<FBGraphQLConnectionSyncStoreProtocol> _mediaStore;
	id<FBGraphQLConnectionSyncStoreProtocol> _photoStore;
	FBPhotosConsumptionReferrer* _referrer;
	FBScenePath* _scenePath;
	FBPhotoStoryOptions _options;

}

@property (nonatomic,readonly) id<FBPhotoStoryContainer> photoStoryContainer;                    //@synthesize photoStoryContainer=_photoStoryContainer - In the implementation block
@property (nonatomic,readonly) FBMemPhoto * openingPhoto;                                        //@synthesize openingPhoto=_openingPhoto - In the implementation block
@property (nonatomic,readonly) id<FBGraphQLConnectionSyncStoreProtocol> mediaStore;              //@synthesize mediaStore=_mediaStore - In the implementation block
@property (nonatomic,readonly) id<FBGraphQLConnectionSyncStoreProtocol> photoStore;              //@synthesize photoStore=_photoStore - In the implementation block
@property (nonatomic,readonly) FBPhotosConsumptionReferrer * referrer;                           //@synthesize referrer=_referrer - In the implementation block
@property (nonatomic,readonly) FBPhotoStoryOptions options;                                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                          //@synthesize scenePath=_scenePath - In the implementation block
+(id)photoStoryTargetWithContainer:(id)arg1 openingPhoto:(id)arg2 mediaStore:(id)arg3 photoStore:(id)arg4 referrer:(id)arg5 photoStoryOptions:(FBPhotoStoryOptions)arg6 scenePath:(id)arg7 ;
-(id)fallbackURLs;
-(FBScenePath *)scenePath;
-(id<FBPhotoStoryContainer>)photoStoryContainer;
-(FBMemPhoto *)openingPhoto;
-(id<FBGraphQLConnectionSyncStoreProtocol>)mediaStore;
-(id<FBGraphQLConnectionSyncStoreProtocol>)photoStore;
-(FBPhotosConsumptionReferrer *)referrer;
-(FBPhotoStoryOptions)options;
@end
