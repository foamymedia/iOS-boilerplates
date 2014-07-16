//
//  FMLCoreDataStack.h
//  StickerApp
//
//  Created by Foamy Media on 09/07/2014.
//  Copyright (c) 2014 foamymedia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FMLCoreDataStack : NSObject
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (instancetype)defaultStack;
- (NSArray*)getStickCategoryEntitiesNames;
- (void)ensureInitialLoad;
- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;
@end
