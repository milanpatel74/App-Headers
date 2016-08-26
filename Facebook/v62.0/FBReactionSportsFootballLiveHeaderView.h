/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBQueriedReactionUnitComponentFieldsProtocol;
@class FBReactionContext, FBMemModelObject, FBReactionSportsFootballLiveHeaderTitleView, FBReactionSportsFootballLiveHeaderFieldView;

@interface FBReactionSportsFootballLiveHeaderView : UIView {

	FBReactionContext* _context;
	FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> _unitComponent;
	FBReactionSportsFootballLiveHeaderTitleView* _titleView;
	FBReactionSportsFootballLiveHeaderFieldView* _driveChartView;
	BOOL _viewConfigured;

}
+(double)desiredHeightForReactionContext:(id)arg1 unitComponent:(id)arg2 ;
-(void)setReactionContext:(id)arg1 ;
-(id)initWithReactionContext:(id)arg1 unitComponent:(id)arg2 ;
-(void)setUpdatedUnitComponent:(id)arg1 ;
-(void)setWindowDetectionEnabled:(BOOL)arg1 ;
-(void)_configureViewIfNeeded;
-(void)_createTitleView;
-(void)_updateWithNewUnitComponent;
-(void)setUnitComponent:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidAppear;
-(void)viewDidDisappear;
@end
