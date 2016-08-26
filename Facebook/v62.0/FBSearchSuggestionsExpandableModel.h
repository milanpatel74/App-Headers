/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBSearchSuggestionsExpandableModel : FBValueObject <NSCopying> {

	NSString* _headerTitle;
	unsigned long long _numberOfCollapsedItems;
	NSArray* _suggestions;

}

@property (nonatomic,copy,readonly) NSString * headerTitle;                            //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfCollapsedItems;              //@synthesize numberOfCollapsedItems=_numberOfCollapsedItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * suggestions;                             //@synthesize suggestions=_suggestions - In the implementation block
-(unsigned long long)numberOfCollapsedItems;
-(id)initWithHeaderTitle:(id)arg1 numberOfCollapsedItems:(unsigned long long)arg2 suggestions:(id)arg3 ;
-(NSString *)headerTitle;
-(NSArray *)suggestions;
@end
