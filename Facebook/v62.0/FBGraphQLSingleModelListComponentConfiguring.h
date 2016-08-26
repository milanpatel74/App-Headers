/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBGraphQLSingleModelListComponentConfiguring <NSObject>
@property (nonatomic,copy) NSString * keyForModelInResponse; 
@property (assign,nonatomic) BOOL reloadOnPullToRefresh; 
@property (assign,nonatomic) BOOL refreshOnReappear; 
@property (assign,nonatomic) unsigned long long cacheThresholdInSeconds; 
@property (assign,nonatomic) BOOL shouldTransitionViewStateManager; 
@property (assign,nonatomic) BOOL shouldShowNoContentOnEmptyResult; 
@property (nonatomic,copy) NSString * loggableName; 
@required
-(void)setReloadOnPullToRefresh:(BOOL)arg1;
-(void)setRefreshOnReappear:(BOOL)arg1;
-(void)setLoggableName:(id)arg1;
-(void)setCacheThresholdInSeconds:(unsigned long long)arg1;
-(NSString *)loggableName;
-(void)setShouldTransitionViewStateManager:(BOOL)arg1;
-(void)setShouldShowNoContentOnEmptyResult:(BOOL)arg1;
-(BOOL)reloadOnPullToRefresh;
-(BOOL)shouldTransitionViewStateManager;
-(BOOL)shouldShowNoContentOnEmptyResult;
-(NSString *)keyForModelInResponse;
-(void)setKeyForModelInResponse:(id)arg1;
-(BOOL)refreshOnReappear;
-(unsigned long long)cacheThresholdInSeconds;

@end
