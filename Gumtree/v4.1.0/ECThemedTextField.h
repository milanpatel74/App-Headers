/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:17 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UITextField.h>
#import <UIKit/UIAppearance.h>

@class NSDictionary, NSString;

@interface ECThemedTextField : UITextField <UIAppearance> {

	NSDictionary* _placeholderAttributes;

}

@property (retain) NSDictionary * placeholderAttributes;              //@synthesize placeholderAttributes=_placeholderAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPlaceholderTextStyle:(id)arg1 ;
-(void)setPlaceholderAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)placeholderAttributes;
-(id)placeholderTextStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPlaceholder:(id)arg1 ;
-(id)textStyle;
-(void)setTextStyle:(id)arg1 ;
@end
