/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol ASLayoutController <NSObject>
@property (assign,nonatomic) CGPoint tuningParameters; 
@required
-(CGPoint*)tuningParametersForRangeType:(long long)arg1;
-(BOOL)shouldUpdateForVisibleIndexPaths:(id)arg1 viewportSize:(CGSize)arg2 rangeType:(long long)arg3;
-(id)indexPathsForScrolling:(long long)arg1 viewportSize:(CGSize)arg2 rangeType:(long long)arg3;
-(void)insertNodesAtIndexPaths:(id)arg1 withSizes:(id)arg2;
-(void)deleteNodesAtIndexPaths:(id)arg1;
-(void)insertSections:(id)arg1 atIndexSet:(id)arg2;
-(void)deleteSectionsAtIndexSet:(id)arg1;
-(void)setVisibleNodeIndexPaths:(id)arg1;
-(BOOL)shouldUpdateForVisibleIndexPath:(id)arg1 viewportSize:(CGSize)arg2;
-(id)indexPathsForScrolling:(long long)arg1 viewportSize:(CGSize)arg2;
-(CGPoint)tuningParameters;
-(void)setTuningParameters:(CGPoint)arg1;

@end
