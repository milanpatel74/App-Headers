/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBContactImporterAddressBookPersonProperty.h>

@class NSString;

@interface FBContactImporterAddressBookPersonRelatedName : NSObject <FBContactImporterAddressBookPersonProperty> {

	NSString* _relation;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * relation;              //@synthesize relation=_relation - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertyFromABLabelRef:(CFStringRef)arg1 ABValueRef:(void*)arg2 ;
-(id)asStrings;
-(id)_initWithRelation:(id)arg1 name:(id)arg2 ;
-(NSString *)description;
-(NSString *)name;
-(NSString *)relation;
@end
