/* IL2CPP: Rotatelab.SeasonPass.SeasonPassRewardBase$$Awake
void Rotatelab_SeasonPass_SeasonPassRewardBase__Awake (Rotatelab_SeasonPass_SeasonPassRewardBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassRewardBase$$Awake
   void Rotatelab_SeasonPass_SeasonPassRewardBase__Awake
   (Rotatelab_SeasonPass_SeasonPassRewardBase_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassRewardBase__Awake_10a19e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  pcVar4 = (char *)(_UNK_010b1abc + 0x10b19fc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b1ac0 + 0x10b1a10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b1ac4 + 0x10b1a1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b1ac8 + 0x10b1a28));
    *pcVar4 = '\x01';
  }
  iVar1 = UnityEngine_Component__GetComponent_object__143f3b0
                    (param_1,**(undefined4 **)(_UNK_010b1acc + 0x10b1a3c));
  piVar5 = (int *)(param_1 + 0x20);
  *piVar5 = iVar1;
  thunk_FUN_00ec5080(piVar5,iVar1);
  if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*piVar5 + 0xb4);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b1ad0 + 0x10b1a74));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar2,param_1,**(undefined4 **)(_UNK_010b1ad4 + 0x10b1a94),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Events_UnityEvent__GetDelegate_361b0cc(uVar2,uVar2,0);
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(_UNK_0362a14c + 0x362a0a8);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a150 + 0x362a0bc));
    *pcVar4 = '\x01';
  }
  iVar7 = *(int *)(iVar1 + 0xc);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar7 + 8);
  uVar6 = *(uint *)(iVar7 + 0xc);
  piVar5 = *(int **)(_UNK_0362a154 + 0x362a0f4);
  *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar6 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar7 + 0xc) = uVar6 + 1;
    puVar3 = (undefined4 *)(iVar8 + uVar6 * 4 + 0x10);
    *puVar3 = uVar2;
    thunk_FUN_00ec5080(puVar3,uVar2);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar7,uVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0x60) + 0x38));
  }
  *(undefined1 *)(iVar1 + 0x14) = 1;
  return;
}

