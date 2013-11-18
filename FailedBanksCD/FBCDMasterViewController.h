//
//  FBCDMasterViewController.h
//  FailedBanksCD
//
//  Created by Thomas Grant on 18/11/2013.
//  Copyright (c) 2013 Thomas Grant. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface FBCDMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
