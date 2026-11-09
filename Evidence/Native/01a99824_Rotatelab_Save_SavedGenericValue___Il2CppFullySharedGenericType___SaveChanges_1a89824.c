/* IL2CPP: Rotatelab.Save.SavedGenericValue<__Il2CppFullySharedGenericType>$$SaveChanges
void Rotatelab_Save_SavedGenericValue___Il2CppFullySharedGenericType___SaveChanges (Rotatelab_Save_SavedGenericValue_T__o* __this, const MethodInfo_1A89824* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedGenericValue<__Il2CppFullySharedGenericType>$$SaveChanges
   void Rotatelab_Save_SavedGenericValue___Il2CppFullySharedGenericType___SaveChanges
   (Rotatelab_Save_SavedGenericValue_T__o* __this, const MethodInfo_1A89824* method); */

void Rotatelab_Save_SavedGenericValue___Il2CppFullySharedGenericType___SaveChanges_1a89824
               (int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  int aiStack_38 [3];
  int *piStack_2c;
  int iStack_28;
  int iStack_24;
  
  iStack_24 = **(int **)(_UNK_01a99958 + 0x1a99844);
  piVar2 = *(int **)(*(int *)(param_2 + 0x10) + 0x60);
  iVar1 = -(*(int *)(*piVar2 + 0x84) + 7U & 0xfffffff8);
  piVar6 = (int *)((int)aiStack_38 + iVar1 + 8);
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar4 = (undefined4 *)piVar2[8];
  uVar3 = *puVar4;
  pcVar7 = (code *)puVar4[2];
  piStack_2c = piVar6;
  *(int **)((int)aiStack_38 + iVar1) = piVar6;
  (*pcVar7)(uVar3,puVar4,param_1,&piStack_2c);
  if (-1 < *(int *)(**(int **)(*(int *)(param_2 + 0x10) + 0x60) + 0x14)) {
    piVar6 = (int *)*piVar6;
  }
  iVar5 = *(int *)(*param_1 + 0xec);
  uVar3 = *(undefined4 *)(iVar5 + 4);
  pcVar7 = *(code **)(iVar5 + 8);
  iStack_28 = (int)piVar6;
  *(int **)((int)aiStack_38 + iVar1) = piVar6;
  (*pcVar7)(uVar3,iVar5,param_1,&iStack_28);
  (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x28))(param_1);
  if (**(int **)(_UNK_01a9995c + 0x1a99944) != iStack_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

