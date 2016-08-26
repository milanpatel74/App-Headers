/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface FBRichStoryLayoutDescription : NSObject <NSCopying> {

	NSMutableDictionary* _elementsByID;

}

@property (nonatomic,retain) NSMutableDictionary * elementsByID;              //@synthesize elementsByID=_elementsByID - In the implementation block
-(id)elementForID:(id)arg1 ;
-(void)addElementDescriptor:(id)arg1 ;
-(void)setElementsByID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)elementsByID;
-(void)_enumerateElementsWithBlock:(/*^block*/id)arg1 ;
-(id)unionWithLayoutDescription:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
