/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemPerson, NSString;

@interface FBTimelineProfileBadgeTapContext : FBValueObject <NSCopying> {

	FBMemPerson* _person;
	NSString* _analyticsModule;

}

@property (nonatomic,copy,readonly) FBMemPerson * person;                    //@synthesize person=_person - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;              //@synthesize analyticsModule=_analyticsModule - In the implementation block
-(NSString *)analyticsModule;
-(id)initWithPerson:(id)arg1 analyticsModule:(id)arg2 ;
-(FBMemPerson *)person;
@end
