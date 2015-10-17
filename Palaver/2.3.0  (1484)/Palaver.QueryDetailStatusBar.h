/*
* This header is generated by classdump-dyld 0.7
* on Saturday, October 17, 2015 at 5:38:49 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/65DBB537-6872-4D18-8EFD-8C10AB6C53BD/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Palaver/Palaver-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface Palaver.QueryDetailStatusBar : UIView {

	 state;
	 statusImageView;
	 statusLabel;
	 actionLabel;

}

@property (assign,nonatomic) long long state; 
@property (assign,__weak,nonatomic) UIImageView * statusImageView; 
@property (assign,__weak,nonatomic) UILabel * statusLabel; 
@property (assign,__weak,nonatomic) UILabel * actionLabel; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(UIImageView *)statusImageView;
-(void)setStatusImageView:(UIImageView *)arg1 ;
-(void)setActionLabel:(UILabel *)arg1 ;
-(UILabel *)actionLabel;
@end

