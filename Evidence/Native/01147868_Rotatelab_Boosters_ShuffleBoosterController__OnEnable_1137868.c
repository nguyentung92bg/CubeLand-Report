/* IL2CPP: Rotatelab.Boosters.ShuffleBoosterController$$OnEnable
void Rotatelab_Boosters_ShuffleBoosterController__OnEnable (Rotatelab_Boosters_ShuffleBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.ShuffleBoosterController$$OnEnable
   void Rotatelab_Boosters_ShuffleBoosterController__OnEnable
   (Rotatelab_Boosters_ShuffleBoosterController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_ShuffleBoosterController__OnEnable_1137868(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_01147938 + 0x114787c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114793c + 0x1147890));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01147940 + 0x114789c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01147944 + 0x11478a8));
    *pcVar6 = '\x01';
  }
  Rotatelab_Boosters_BaseBoosterController__OnEnable_1131c7c(param_1);
  piVar8 = *(int **)(_UNK_01147948 + 0x11478c4);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x30);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114794c + 0x11478e8));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01147950 + 0x1147908),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x30);
  *puVar5 = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

