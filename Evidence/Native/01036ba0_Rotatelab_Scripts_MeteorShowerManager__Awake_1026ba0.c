/* IL2CPP: Rotatelab.Scripts.MeteorShowerManager$$Awake
void Rotatelab_Scripts_MeteorShowerManager__Awake (Rotatelab_Scripts_MeteorShowerManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MeteorShowerManager$$Awake
   void Rotatelab_Scripts_MeteorShowerManager__Awake (Rotatelab_Scripts_MeteorShowerManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_MeteorShowerManager__Awake_1026ba0(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_01036c7c + 0x1036bb4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01036c80 + 0x1036bc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01036c84 + 0x1036bd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01036c88 + 0x1036be0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01036c8c + 0x1036bec));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_01036c90 + 0x1036c00);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x124);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01036c94 + 0x1036c24));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_01036c98 + 0x1036c44),0)
  ;
  uVar4 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar7,uVar4,**(undefined4 **)(_UNK_01036c9c + 0x1036c5c));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x124);
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

