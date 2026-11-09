/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$get_RainbowBlasterBulletCount
int32_t Rotatelab_Scripts_PlaceableManager__get_RainbowBlasterBulletCount (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$get_RainbowBlasterBulletCount
   int32_t Rotatelab_Scripts_PlaceableManager__get_RainbowBlasterBulletCount
   (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_PlaceableManager__get_RainbowBlasterBulletCount_1040eec(void)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  double dVar6;
  double dVar7;
  double dStack_28;
  
  pcVar5 = (char *)(_UNK_01050f48 + 0x1050efc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01050f4c + 0x1050f10));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01050f50 + 0x1050f24));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar2 = (float)Rotatelab_UI_CreativeSlider__GetValue_110ae54(*(int *)(iVar1 + 200),0);
  pcVar5 = (char *)(_UNK_0111b600 + 0x111b50c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111b604 + 0x111b520));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0111b608 + 0x111b538) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar6 = (double)fVar2;
  dVar7 = (double)modf(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),&dStack_28);
  if (0.0 <= fVar2) {
    if (dVar7 != 0.5) {
      dVar6 = (double)floor(SUB84(dVar6 + 0.5,0),(int)((ulonglong)(dVar6 + 0.5) >> 0x20));
      goto LAB_0111b5d4;
    }
    dVar6 = 1.0;
  }
  else {
    if (dVar7 != -0.5) {
      dVar6 = (double)ceil(SUB84(dVar6 + -0.5,0),(int)((ulonglong)(dVar6 + -0.5) >> 0x20));
      goto LAB_0111b5d4;
    }
    dVar6 = -1.0;
  }
  uVar3 = FUN_00f88224(SUB84(dStack_28,0),(int)((ulonglong)dStack_28 >> 0x20));
  dVar6 = dStack_28 + dVar6;
  if ((uVar3 & 1) == 0) {
    dVar6 = dStack_28;
  }
LAB_0111b5d4:
  uVar4 = (undefined4)(longlong)dVar6;
  if (dVar6 == _UNK_0111b5f8) {
    uVar4 = 0x80000000;
  }
  return uVar4;
}

