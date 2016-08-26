/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, FBStringField;

@interface FBStringElement : FBGraphQLInput {

	NSString* _formFieldId;
	NSString* _disableAutofill;
	FBStringField* _value;

}

@property (nonatomic,copy) NSString * formFieldId;                  //@synthesize formFieldId=_formFieldId - In the implementation block
@property (nonatomic,copy) NSString * disableAutofill;              //@synthesize disableAutofill=_disableAutofill - In the implementation block
@property (nonatomic,copy) FBStringField * value;                   //@synthesize value=_value - In the implementation block
-(NSString *)formFieldId;
-(NSString *)disableAutofill;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setFormFieldId:(NSString *)arg1 ;
-(void)setDisableAutofill:(NSString *)arg1 ;
-(FBStringField *)value;
-(void)setValue:(FBStringField *)arg1 ;
@end
