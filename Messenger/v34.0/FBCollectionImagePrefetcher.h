/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBCollectionImagePrefetcherDelegate;
@class FBImagePrefetchController, FBNumericalScenePathContext, NSString, NSMutableSet;

@interface FBCollectionImagePrefetcher : NSObject {

	FBImagePrefetchController* _prefetchController;
	FBNumericalScenePathContext* _scenePathContext;
	BOOL _prefetchOnCellular;
	id<FBCollectionImagePrefetcherDelegate> _delegate;
	unsigned long long _prefetchCount;
	NSString* _analyticsModule;
	NSMutableSet* _specifierMap;

}

@property (nonatomic,__weak,readonly) id<FBCollectionImagePrefetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long prefetchCount;                                     //@synthesize prefetchCount=_prefetchCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;                                      //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,copy,readonly) NSMutableSet * specifierMap;                                     //@synthesize specifierMap=_specifierMap - In the implementation block
-(NSString *)analyticsModule;
-(void)prefetchForIndex:(unsigned long long)arg1 prefetchCount:(long long)arg2 ;
-(id)_imageSpecifierForCollectionSpecfier:(id)arg1 andIndex:(unsigned long long)arg2 ;
-(id)initWithDelegate:(id)arg1 prefetchCount:(unsigned long long)arg2 imagePrefetchController:(id)arg3 scenePathContext:(id)arg4 analyticsModule:(id)arg5 prefetchOnCellular:(BOOL)arg6 ;
-(void)prefetchForIndex:(unsigned long long)arg1 ;
-(unsigned long long)prefetchCount;
-(NSMutableSet *)specifierMap;
-(id)init;
-(id<FBCollectionImagePrefetcherDelegate>)delegate;
@end
