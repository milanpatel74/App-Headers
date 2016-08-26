/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIImageView, UIView;

@interface FBMemEventComponentCell : UITableViewCell {

	UIImageView* _componentMaskImageView;
	UIEdgeInsets _contentEdgeInset;
	BOOL _isCarded;
	UIView* _mainView;

}

@property (nonatomic,retain) UIView * mainView;              //@synthesize mainView=_mainView - In the implementation block
@property (assign,nonatomic) BOOL isCarded;                  //@synthesize isCarded=_isCarded - In the implementation block
+(double)heightWithContentView:(id)arg1 isCarded:(BOOL)arg2 tableWidth:(double)arg3 ;
-(void)setMainView:(UIView *)arg1 ;
-(UIView *)mainView;
-(void)_initializeCardedView;
-(CGRect)_centeredMainContentFrame;
-(CGSize)_mainViewConstrainedSize;
-(void)setIsCarded:(BOOL)arg1 ;
-(id)componentContainerView;
-(BOOL)isCarded;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
