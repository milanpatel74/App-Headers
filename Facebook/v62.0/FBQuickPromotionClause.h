/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FBQuickPromotionClause : NSObject {

	NSString* _type;
	NSArray* _filters;
	NSArray* _clauses;

}

@property (nonatomic,copy,readonly) NSString * type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * filters;              //@synthesize filters=_filters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * clauses;              //@synthesize clauses=_clauses - In the implementation block
+(id)validClauseTypes;
-(BOOL)_passesClauseWithContext:(id)arg1 withDebugInfo:(id*)arg2 ;
-(NSArray *)clauses;
-(id)initWithJSONDictionary:(id)arg1 withPromotion:(id)arg2 session:(id)arg3 ;
-(id)_coerceNumberValue:(id)arg1 ;
-(BOOL)passesClauseWithContext:(id)arg1 withDebugInfo:(id*)arg2 ;
-(NSString *)type;
-(NSArray *)filters;
@end
