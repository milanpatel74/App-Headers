/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface FBPlacesAboutHoursViewModel : FBValueObject <NSCopying> {

	BOOL _pageIsClosed;
	NSArray* _pageHours;
	NSString* _pageTimezone;

}

@property (nonatomic,readonly) BOOL pageIsClosed;                         //@synthesize pageIsClosed=_pageIsClosed - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pageHours;                  //@synthesize pageHours=_pageHours - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageTimezone;              //@synthesize pageTimezone=_pageTimezone - In the implementation block
+(id)viewModelForPage:(id)arg1 ;
-(id)initWithPageIsClosed:(BOOL)arg1 pageHours:(id)arg2 pageTimezone:(id)arg3 ;
-(BOOL)pageIsClosed;
-(NSArray *)pageHours;
-(NSString *)pageTimezone;
@end
