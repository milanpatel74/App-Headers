/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPaymentsAddressListCellViewModel : FBValueObject <NSCopying> {

	BOOL _shouldShowCheckmark;
	NSString* _textLabelText;
	NSString* _detailTextLabelText;

}

@property (nonatomic,copy,readonly) NSString * textLabelText;                    //@synthesize textLabelText=_textLabelText - In the implementation block
@property (nonatomic,copy,readonly) NSString * detailTextLabelText;              //@synthesize detailTextLabelText=_detailTextLabelText - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowCheckmark;                         //@synthesize shouldShowCheckmark=_shouldShowCheckmark - In the implementation block
-(id)initWithTextLabelText:(id)arg1 detailTextLabelText:(id)arg2 shouldShowCheckmark:(BOOL)arg3 ;
-(NSString *)textLabelText;
-(NSString *)detailTextLabelText;
-(BOOL)shouldShowCheckmark;
@end
