/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/CommentsViewController.h>
#import <AlienBlue/StatefulControllerProtocol.h>

@class CommentsHeaderView_iPad, NSString;

@interface CommentsViewController_iPad : CommentsViewController <StatefulControllerProtocol> {

	CommentsHeaderView_iPad* _headerView;

}

@property (retain) CommentsHeaderView_iPad * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPost:(id)arg1 contextId:(id)arg2 ;
-(void)respondToStyleChange;
-(void)commentsDidFinishLoading;
-(void)addPreCommentNodes;
-(void)collapseGestureReceived:(id)arg1 ;
-(void)focusOnCommentGestureReceived:(id)arg1 ;
-(void)updateNavigationHeader;
-(id)commentNodeAtSwipeGesture:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(CommentsHeaderView_iPad *)headerView;
-(void)setHeaderView:(CommentsHeaderView_iPad *)arg1 ;
-(double)pageWidth;
@end
