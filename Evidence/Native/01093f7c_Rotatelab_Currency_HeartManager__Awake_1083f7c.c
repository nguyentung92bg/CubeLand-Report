/* IL2CPP: Rotatelab.Currency.HeartManager$$Awake
void Rotatelab_Currency_HeartManager__Awake (Rotatelab_Currency_HeartManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.HeartManager$$Awake
   void Rotatelab_Currency_HeartManager__Awake (Rotatelab_Currency_HeartManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Currency_HeartManager__Awake_1083f7c(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_01094064 + 0x1093f90);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01094068 + 0x1093fa4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109406c + 0x1093fb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01094070 + 0x1093fbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01094074 + 0x1093fc8));
    *pcVar6 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_01094078 + 0x1093fdc));
  piVar8 = *(int **)(_UNK_0109407c + 0x1093ff0);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x74);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01094080 + 0x1094014));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01094084 + 0x1094034),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x74);
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

