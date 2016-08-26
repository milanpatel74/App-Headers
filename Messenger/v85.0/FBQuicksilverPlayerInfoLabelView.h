/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, FBQuicksilverPlayerInfoLabelViewModel;

@interface FBQuicksilverPlayerInfoLabelView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _bodyLabel;
	FBQuicksilverPlayerInfoLabelViewModel* _viewModel;

}
-(void)_layoutLabel:(id)arg1 withLabelAttributes:(id)arg2 startingPoint:(CGPoint)arg3 ;
-(CGSize)_labelSizeForLabelAttributes:(id)arg1 boundingSize:(CGSize)arg2 ;
-(void)_setLabelAttributes:(id)arg1 forLabel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setViewModel:(id)arg1 ;
@end
