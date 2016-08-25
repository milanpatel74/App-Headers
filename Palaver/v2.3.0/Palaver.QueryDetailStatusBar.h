/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 26, 2015 at 1:21:43 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D7C9C869-53E4-46E2-8916-FD36C54A9FF5/Palaver.app/Palaver
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
