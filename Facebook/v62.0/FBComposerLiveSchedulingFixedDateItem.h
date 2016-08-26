/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComposerLiveSchedulingFixedDateItem : FBValueObject <NSCopying> {

	NSString* _identifier;
	NSString* _title;
	NSString* _selectedIdentifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedIdentifier;              //@synthesize selectedIdentifier=_selectedIdentifier - In the implementation block
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 selectedIdentifier:(id)arg3 ;
-(NSString *)identifier;
-(NSString *)title;
-(NSString *)selectedIdentifier;
@end
