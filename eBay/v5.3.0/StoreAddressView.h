/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, UIView;

@interface StoreAddressView : UIButton {

	UILabel* header;
	UILabel* name;
	UILabel* address1;
	UILabel* address2;
	UILabel* location;
	UIView* accessory;

}

@property (nonatomic,retain) UILabel * header; 
@property (nonatomic,retain) UILabel * name; 
@property (nonatomic,retain) UILabel * address1; 
@property (nonatomic,retain) UILabel * address2; 
@property (nonatomic,retain) UILabel * location; 
@property (nonatomic,retain) UIView * accessory; 
-(double)optimalHeight;
-(void)updateStoreAddress:(id)arg1 ;
-(UILabel *)address2;
-(void)setAddress2:(UILabel *)arg1 ;
-(void)setAddress1:(UILabel *)arg1 ;
-(UILabel *)address1;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setName:(UILabel *)arg1 ;
-(UILabel *)name;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)location;
-(void)setLocation:(UILabel *)arg1 ;
-(UIView *)accessory;
-(void)setAccessory:(UIView *)arg1 ;
-(void)setHeader:(UILabel *)arg1 ;
-(UILabel *)header;
@end
