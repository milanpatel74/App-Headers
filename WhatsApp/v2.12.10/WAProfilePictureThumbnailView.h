/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIImageView.h>

@class NSString, UIColor;

@interface WAProfilePictureThumbnailView : UIImageView {

	BOOL _round;
	NSString* _jid;
	UIColor* _placeholderColor;

}

@property (nonatomic,copy) NSString * jid;                            //@synthesize jid=_jid - In the implementation block
@property (nonatomic,retain) UIColor * placeholderColor;              //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (assign,getter=isRound,nonatomic) BOOL round;               //@synthesize round=_round - In the implementation block
-(void)setJid:(NSString *)arg1 ;
-(NSString *)jid;
-(void)profilePictureManagerDidUpdatePicture:(id)arg1 ;
-(BOOL)isRound;
-(void)setRound:(BOOL)arg1 ;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reloadImage;
@end
