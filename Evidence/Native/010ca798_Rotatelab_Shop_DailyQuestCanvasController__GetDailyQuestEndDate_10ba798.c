/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$GetDailyQuestEndDate
System_DateTime_o Rotatelab_Shop_DailyQuestCanvasController__GetDailyQuestEndDate (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$GetDailyQuestEndDate
   System_DateTime_o Rotatelab_Shop_DailyQuestCanvasController__GetDailyQuestEndDate
   (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestCanvasController__GetDailyQuestEndDate_10ba798
               (undefined4 *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint in_fpscr;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_010ca910 + 0x10ca7b4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca914 + 0x10ca7c8));
    *pcVar2 = '\x01';
  }
  piVar4 = *(int **)(_UNK_010ca918 + 0x10ca7e0);
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  if (*(int *)(*piVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_28,0);
  iVar3 = *(int *)(param_2 + 0x40);
  iVar1 = System_DateTime__get_DayOfWeek_2b49d48(&uStack_28,0);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Date_2b49a20(&uStack_30,&uStack_28,0);
  iVar3 = iVar3 - iVar1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 7;
  }
  uVar7 = VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  System_DateTime__AddDays_2b48944
            (&uStack_38,&uStack_30,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0);
  uStack_30 = uStack_38;
  uStack_2c = uStack_34;
  System_DateTime__AddHours_2b489e0(&uStack_38,&uStack_30,0,0x40370000,0);
  uVar5 = (undefined4)((ulonglong)_UNK_010ca908 >> 0x20);
  uVar6 = (undefined4)_UNK_010ca908;
  uStack_30 = uStack_38;
  uStack_2c = uStack_34;
  System_DateTime__AddMinutes_2b48b14(&uStack_38,&uStack_30,uVar6,uVar5,0);
  uStack_30 = uStack_38;
  uStack_2c = uStack_34;
  System_DateTime__AddSeconds_2b491b0(&uStack_38,&uStack_30,uVar6,uVar5,0);
  *param_1 = uStack_38;
  param_1[1] = uStack_34;
  return;
}

