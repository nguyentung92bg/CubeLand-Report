/* IL2CPP: Rotatelab.Boosters.BaseBoosterController$$get_Data
Rotatelab_Boosters_BoosterBaseData_o* Rotatelab_Boosters_BaseBoosterController__get_Data (Rotatelab_Boosters_BaseBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BaseBoosterController$$get_Data
   Rotatelab_Boosters_BoosterBaseData_o* Rotatelab_Boosters_BaseBoosterController__get_Data
   (Rotatelab_Boosters_BaseBoosterController_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Boosters_BaseBoosterController__get_Data_1131ac0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pcVar4 = (char *)(_UNK_01141c48 + 0x1141ad4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141c4c + 0x1141ae8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141c50 + 0x1141af4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141c54 + 0x1141b00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141c58 + 0x1141b0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141c5c + 0x1141b18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141c60 + 0x1141b24));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01141c64 + 0x1141b38));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = *(undefined4 *)(iVar1 + 0x20);
  uVar2 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
  piVar5 = *(int **)(_UNK_01141c68 + 0x1141b74);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar3[1];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar7 = *puVar3;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01141c6c + 0x1141bbc));
    System_Func_object__Int32Enum__bool____ctor_239e560
              (iVar6,uVar7,**(undefined4 **)(_UNK_01141c70 + 0x1141bdc),0);
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 4);
    *piVar5 = iVar6;
    thunk_FUN_00ec5080(piVar5,iVar6);
  }
  if (*(int *)(**(int **)(_UNK_01141c74 + 0x1141c04) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__Find_object__Int32Enum__1486c7c
                    (uVar8,uVar2,iVar6,**(undefined4 **)(_UNK_01141c78 + 0x1141c28));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(iVar1 + 0x10);
}

