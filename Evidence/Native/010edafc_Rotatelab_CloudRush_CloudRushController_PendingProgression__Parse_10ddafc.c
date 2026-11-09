/* IL2CPP: Rotatelab.CloudRush.CloudRushController.PendingProgression$$Parse
Rotatelab_CloudRush_CloudRushController_PendingProgression_o Rotatelab_CloudRush_CloudRushController_PendingProgression__Parse (System_String_o* saved, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.CloudRush.CloudRushController.PendingProgression$$Parse
   Rotatelab_CloudRush_CloudRushController_PendingProgression_o
   Rotatelab_CloudRush_CloudRushController_PendingProgression__Parse (System_String_o* saved, const
   MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushController_PendingProgression__Parse_10ddafc
               (undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_String__Split_2a0df50(param_2,0x3b,0,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  uVar2 = System_Int32__Parse_2b6bda0(*(undefined4 *)(iVar1 + 0x10),0);
  if (*(uint *)(iVar1 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  uVar3 = System_Int32__Parse_2b6bda0(*(undefined4 *)(iVar1 + 0x14),0);
  if (*(uint *)(iVar1 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  uVar4 = System_Int32__Parse_2b6bda0(*(undefined4 *)(iVar1 + 0x18),0);
  if (*(uint *)(iVar1 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  uVar5 = System_Int32__Parse_2b6bda0(*(undefined4 *)(iVar1 + 0x1c),0);
  if (*(uint *)(iVar1 + 0xc) < 5) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  uVar6 = System_Int32__Parse_2b6bda0(*(undefined4 *)(iVar1 + 0x20),0);
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  return;
}

