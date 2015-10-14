/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIScrollView, NSArray, NSMutableArray, PTHTweetbotPostController, PTHTweetbotPostDraft, PTHTweetbotEntity, NSString;

@interface PTHTweetbotPostToolbarResultsView : UIView <UIScrollViewDelegate> {

	UIScrollView* _scrollView;
	NSArray* _postToolbarItems;
	NSMutableArray* _visibleBlockViews;
	double _visibleBlockPosition;
	NSMutableArray* _queuedViews;
	PTHTweetbotPostController* _controller;
	PTHTweetbotPostDraft* _draft;
	PTHTweetbotEntity* _selectedEntity;
	NSArray* _results;

}

@property (assign,nonatomic,__weak) PTHTweetbotPostController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) PTHTweetbotPostDraft * draft;                               //@synthesize draft=_draft - In the implementation block
@property (nonatomic,retain) PTHTweetbotEntity * selectedEntity;                         //@synthesize selectedEntity=_selectedEntity - In the implementation block
@property (nonatomic,copy) NSArray * results;                                            //@synthesize results=_results - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PTHTweetbotPostDraft *)draft;
-(void)setDraft:(PTHTweetbotPostDraft *)arg1 ;
-(void)setSelectedEntity:(PTHTweetbotEntity *)arg1 ;
-(PTHTweetbotEntity *)selectedEntity;
-(id)_createCellForToolbarItem:(id)arg1 ;
-(void)searchEntity:(id)arg1 control:(id)arg2 ;
-(void)replaceEntity:(id)arg1 withString:(id)arg2 ;
-(void)_selectedCell:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(PTHTweetbotPostController *)controller;
-(void)setController:(PTHTweetbotPostController *)arg1 ;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(void)_updateVisibleViews;
@end
