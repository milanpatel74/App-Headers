/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:05 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class UAAction, NSMutableArray, NSMutableDictionary, NSArray;

@interface UAActionRegistryEntry : NSObject {

	UAAction* _action;
	/*^block*/id _predicate;
	NSMutableArray* _mutableNames;
	NSMutableDictionary* _situationOverrides;

}

@property (nonatomic,retain) UAAction * action;                                     //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id predicate;                                            //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) NSArray * names; 
@property (nonatomic,retain) NSMutableArray * mutableNames;                         //@synthesize mutableNames=_mutableNames - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * situationOverrides;              //@synthesize situationOverrides=_situationOverrides - In the implementation block
+(id)entryForAction:(id)arg1 predicate:(/*^block*/id)arg2 ;
-(void)setMutableNames:(NSMutableArray *)arg1 ;
-(void)setSituationOverrides:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)situationOverrides;
-(id)initWithAction:(id)arg1 predicate:(/*^block*/id)arg2 ;
-(NSMutableArray *)mutableNames;
-(id)actionForSituation:(long long)arg1 ;
-(void)addSituationOverride:(long long)arg1 withAction:(id)arg2 ;
-(id)description;
-(UAAction *)action;
-(void)setAction:(UAAction *)arg1 ;
-(void)setPredicate:(id)arg1 ;
-(id)predicate;
-(NSArray *)names;
@end
