/* IL2CPP: Rotatelab.HomePageCoordinator$$OnEnable
void Rotatelab_HomePageCoordinator__OnEnable (Rotatelab_HomePageCoordinator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.HomePageCoordinator$$OnEnable
   void Rotatelab_HomePageCoordinator__OnEnable (Rotatelab_HomePageCoordinator_o* __this, const
   MethodInfo* method); */

void Rotatelab_HomePageCoordinator__OnEnable_107a0e8(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_0108a1c4 + 0x108a0fc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a1c8 + 0x108a110));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a1cc + 0x108a11c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a1d0 + 0x108a128));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a1d4 + 0x108a134));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0108a1d8 + 0x108a148);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108a1dc + 0x108a16c));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_0108a1e0 + 0x108a18c),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                    (uVar7,uVar4,**(undefined4 **)(_UNK_0108a1e4 + 0x108a1a4));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120);
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

