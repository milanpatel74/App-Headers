/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, UIFont;

@interface FBQuicksilverPlayerInfoLabelAttributes : FBValueObject <NSCopying> {

	NSString* _text;
	UIColor* _textColor;
	UIFont* _textFont;
	long long _alignment;
	UIEdgeInsets _insets;

}

@property (nonatomic,copy,readonly) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) UIColor * textColor;              //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) UIFont * textFont;                //@synthesize textFont=_textFont - In the implementation block
@property (nonatomic,readonly) long long alignment;                   //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets insets;                   //@synthesize insets=_insets - In the implementation block
-(id)initWithText:(id)arg1 textColor:(id)arg2 textFont:(id)arg3 alignment:(long long)arg4 insets:(UIEdgeInsets)arg5 ;
-(NSString *)text;
-(UIColor *)textColor;
-(long long)alignment;
-(UIFont *)textFont;
-(UIEdgeInsets)insets;
@end
