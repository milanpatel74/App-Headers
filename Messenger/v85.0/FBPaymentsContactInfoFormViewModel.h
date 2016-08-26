/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSArray;

@interface FBPaymentsContactInfoFormViewModel : FBValueObject <NSCopying> {

	NSString* _navigationBarTitle;
	NSString* _deleteButtonTitle;
	NSString* _makeAsDefaultSectionFooterText;
	NSDictionary* _formIdentifierMap;
	NSArray* _formCellLayoutDefinition;

}

@property (nonatomic,copy,readonly) NSString * navigationBarTitle;                          //@synthesize navigationBarTitle=_navigationBarTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * deleteButtonTitle;                           //@synthesize deleteButtonTitle=_deleteButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * makeAsDefaultSectionFooterText;              //@synthesize makeAsDefaultSectionFooterText=_makeAsDefaultSectionFooterText - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * formIdentifierMap;                       //@synthesize formIdentifierMap=_formIdentifierMap - In the implementation block
@property (nonatomic,copy,readonly) NSArray * formCellLayoutDefinition;                     //@synthesize formCellLayoutDefinition=_formCellLayoutDefinition - In the implementation block
-(id)initWithNavigationBarTitle:(id)arg1 deleteButtonTitle:(id)arg2 makeAsDefaultSectionFooterText:(id)arg3 formIdentifierMap:(id)arg4 formCellLayoutDefinition:(id)arg5 ;
-(NSString *)deleteButtonTitle;
-(NSString *)makeAsDefaultSectionFooterText;
-(NSDictionary *)formIdentifierMap;
-(NSArray *)formCellLayoutDefinition;
-(NSString *)navigationBarTitle;
@end
