/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSearchDiscoverLoggerProtocol <NSObject>
@required
-(void)logViewWillAppear;
-(void)cancelEvents;
-(void)logViewWillDisappear;
-(void)logStartInitialDataLoading;
-(void)logAfterInitialDataLoading;
-(void)logResetImpressions;
-(void)logDidLoadDataWithResult:(id)arg1;
-(void)logScrollViewWillBeginDragging;
-(void)logFailedDataLoading;
-(void)logGraphSearchExpandableModuleExpandedWithModels:(id)arg1 moduleModel:(id)arg2;
-(void)logWillOpenSearchResults;
-(void)logDataSourceWillBeginUpdates;
-(void)logDataSourceDidEndUpdatesWithHasModel:(BOOL)arg1;
-(void)logComponentWillAppearInViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3;
-(void)logDidChangeNavigationControlSegment;
-(void)rageShake;

@end
