/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/MGXAfterEffectsItem.h>

@class NSArray;

@interface MGXAfterEffectsFolder : MGXAfterEffectsItem {

	NSArray* _items;

}

@property (retain) NSArray * items;              //@synthesize items=_items - In the implementation block
-(id)allChildItems;
-(id)childFolderWithName:(id)arg1 ;
-(id)childItemWithName:(id)arg1 ofKind:(Class)arg2 ;
-(id)childItemWithName:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
@end
