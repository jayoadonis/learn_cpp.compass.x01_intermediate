#ifndef __X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X01_IPRODUCT_H
#define __X01_DESIGN_PATTERN_CREATIONAL_SHARED_MODEL_X01_IPRODUCT_H

namespace x01_design_pattern::creational::shared::model::x01 {
  class IProduct {
    protected:
      explicit IProduct();
    private:
      explicit IProduct(IProduct &) = delete;
      explicit IProduct(IProduct &&) noexcept = delete;
      IProduct &operator=(IProduct &) = delete;
      IProduct &operator=(IProduct &&) noexcept = delete;
    public:
      virtual ~IProduct() noexcept;
      virtual void prepare() = 0;
  };
}
#endif
